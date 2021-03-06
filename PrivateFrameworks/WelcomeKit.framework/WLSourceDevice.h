/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

@interface WLSourceDevice : NSObject <NSSecureCoding> {
    NSString *_bonjourServiceName;
    unsigned int _dataTypes;
    NSString *_hardwareBrand;
    NSString *_hardwareDesign;
    NSString *_hardwareMaker;
    NSString *_hardwareModel;
    NSString *_hardwareProduct;
    unsigned short _httpPort;
    NSString *_ipAddress;
    NSString *_name;
    NSString *_osAPIVersion;
    NSString *_persistentIdentifier;
    unsigned short _socketPort;
}

@property (nonatomic, copy) NSString *bonjourServiceName;
@property (nonatomic) unsigned int dataTypes;
@property (nonatomic, copy) NSString *hardwareBrand;
@property (nonatomic, copy) NSString *hardwareDesign;
@property (nonatomic, copy) NSString *hardwareMaker;
@property (nonatomic, copy) NSString *hardwareModel;
@property (nonatomic, copy) NSString *hardwareProduct;
@property (nonatomic) unsigned short httpPort;
@property (nonatomic, copy) NSString *ipAddress;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *osAPIVersion;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic) unsigned short socketPort;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bonjourServiceName;
- (unsigned int)dataTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareBrand;
- (id)hardwareDesign;
- (id)hardwareMaker;
- (id)hardwareModel;
- (id)hardwareProduct;
- (unsigned short)httpPort;
- (id)initWithCoder:(id)arg1;
- (id)ipAddress;
- (id)name;
- (id)osAPIVersion;
- (id)persistentIdentifier;
- (void)setBonjourServiceName:(id)arg1;
- (void)setDataTypes:(unsigned int)arg1;
- (void)setHardwareBrand:(id)arg1;
- (void)setHardwareDesign:(id)arg1;
- (void)setHardwareMaker:(id)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHardwareProduct:(id)arg1;
- (void)setHttpPort:(unsigned short)arg1;
- (void)setIpAddress:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOsAPIVersion:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setSocketPort:(unsigned short)arg1;
- (unsigned short)socketPort;

@end
