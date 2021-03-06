/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHealthDeviceConnectionInfo : NSObject {
    id /* block */ _characteristicsHandler;
    int _connectionState;
    NSUUID *_peripheralUUID;
    id /* block */ _sessionHandler;
    unsigned int _sessionIdentifier;
    id /* block */ _transitoryHandler;
}

@property (nonatomic, readonly) id /* block */ characteristicsHandler;
@property (nonatomic) int connectionState;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property (nonatomic, readonly) id /* block */ sessionHandler;
@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic, readonly) id /* block */ transitoryHandler;

- (void).cxx_destruct;
- (id /* block */)characteristicsHandler;
- (int)connectionState;
- (id)initWithSessionHandler:(id /* block */)arg1 transitoryHandler:(id /* block */)arg2 characteristicsHandler:(id /* block */)arg3 peripheralUUID:(id)arg4;
- (id)peripheralUUID;
- (id /* block */)sessionHandler;
- (unsigned int)sessionIdentifier;
- (void)setConnectionState:(int)arg1;
- (void)setSessionIdentifier:(unsigned int)arg1;
- (id /* block */)transitoryHandler;

@end
