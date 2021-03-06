/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQueryStitchingContext : NSObject {
    BRQuery *_query;
    BRNotificationReceiver *_receiver;
}

@property (nonatomic, readonly) BRNotificationReceiver *receiver;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSDictionary *resultsByRowID;

- (void)dealloc;
- (id)initWithQuery:(id)arg1;
- (void)performAsyncOnReceiver:(id /* block */)arg1;
- (id)receiver;
- (id)results;
- (id)resultsByRowID;

@end
