#import <FDRequestClient/FDRequestClient.h>
#import "FDDataClientDelegate.h"


#pragma mark Constants


#pragma mark - Enumerations


#pragma mark - Class Interface

@interface FDDataClient : NSObject


#pragma mark - Properties

@property (nonatomic, weak) id<FDDataClientDelegate> delegate;
@property (nonatomic, strong) NSDateFormatter *dateFormatter;
@property (nonatomic, copy) NSArray *headerFieldsToLog;


#pragma mark - Constructors


#pragma mark - Static Methods


#pragma mark - Instance Methods

- (FDRequestClientTask *)loadHTTPRequest: (FDHTTPRequest *)httpRequest 
	authorizationBlock: (FDRequestClientTaskAuthorizationBlock)authorizationBlock 
	progressBlock: (FDRequestClientTaskProgressBlock)progressBlock 
	dataParserBlock: (FDRequestClientTaskDataParserBlock)dataParserBlock 
	completionBlock: (FDRequestClientTaskCompletionBlock)completionBlock;


@end