/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageURLProtocol : NSURLProtocol {
    MFMessageTextAttachment *_attachment;
    NSMutableArray *_attachments;
    MFMonitoredInvocation *_invocation;
    NSThread *_loader;
    BOOL _stopped;
    NSURL *_url;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)_downloadAttachment;
- (void)_downloadedData:(id)arg1 mimeType:(id)arg2;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;

@end
