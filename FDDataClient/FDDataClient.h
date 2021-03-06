#import <FDRequestClient/FDRequestClient.h>
#import "FDDataClientDelegate.h"


#pragma mark Type Definitions

typedef Class (^FDDataClientModelClassBlock)(NSString *parentKey, id identifier);


#pragma mark - Class Interface

@interface FDDataClient : NSObject


#pragma mark - Properties

@property (nonatomic, weak) id<FDDataClientDelegate> delegate;
@property (nonatomic, strong) NSDateFormatter *dateFormatter;
@property (nonatomic, assign) BOOL logCurlCommandsToConsole;
@property (nonatomic, copy) NSArray *headerFieldsToLog;


#pragma mark - Instance Methods

- (FDRequestClientTask *)loadHTTPRequest: (FDHTTPRequest *)httpRequest 
	authorizationBlock: (FDRequestClientTaskAuthorizationBlock)authorizationBlock 
	progressBlock: (FDRequestClientTaskProgressBlock)progressBlock 
	dataParserBlock: (FDRequestClientTaskDataParserBlock)dataParserBlock 
	modelClassBlock: (FDDataClientModelClassBlock)modelClassBlock 
	completionBlock: (FDRequestClientTaskCompletionBlock)completionBlock;


@end