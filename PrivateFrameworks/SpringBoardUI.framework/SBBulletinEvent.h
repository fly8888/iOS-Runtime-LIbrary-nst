/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBBulletinEvent : NSObject {
    NSString *_bulletinID;
    unsigned int _feed;
    id /* block */ _handler;
}

+ (id)eventForBulletin:(id)arg1 feed:(unsigned int)arg2 block:(id /* block */)arg3;

- (id)bulletinID;
- (void)dealloc;
- (void)execute;
- (unsigned int)feed;
- (id)initWithBulletin:(id)arg1 feed:(unsigned int)arg2 block:(id /* block */)arg3;

@end
