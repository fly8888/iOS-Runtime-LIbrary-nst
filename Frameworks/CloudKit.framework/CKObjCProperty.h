/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKObjCType, NSMethodSignature, NSString;

@interface CKObjCProperty : NSObject {
    Class _classHandle;
    unsigned long long _flags;
    NSMethodSignature *_getterMethodSignature;
    SEL _getterSelector;
    NSString *_getterSelectorName;
    NSString *_instanceVariableName;
    NSString *_name;
    NSMethodSignature *_setterMethodSignature;
    SEL _setterSelector;
    NSString *_setterSelectorName;
    CKObjCType *_type;
}

@property(readonly) Class classHandle;
@property(readonly) unsigned long long flags;
@property(readonly) NSMethodSignature * getterMethodSignature;
@property(readonly) SEL getterSelector;
@property(readonly) NSString * getterSelectorName;
@property(readonly) NSString * instanceVariableName;
@property(readonly) NSString * name;
@property(readonly) NSMethodSignature * setterMethodSignature;
@property(readonly) SEL setterSelector;
@property(readonly) NSString * setterSelectorName;
@property(readonly) CKObjCType * type;

- (void).cxx_destruct;
- (Class)classHandle;
- (long long)compare:(id)arg1;
- (long long)compareToProperty:(id)arg1;
- (unsigned long long)flags;
- (id)getFromObject:(id)arg1;
- (id)getterMethodSignature;
- (SEL)getterSelector;
- (id)getterSelectorName;
- (id)initWithClass:(Class)arg1 property:(struct objc_property { }*)arg2;
- (id)instanceVariableName;
- (id)name;
- (void)setValue:(id)arg1 onObject:(id)arg2;
- (id)setterMethodSignature;
- (SEL)setterSelector;
- (id)setterSelectorName;
- (id)type;

@end