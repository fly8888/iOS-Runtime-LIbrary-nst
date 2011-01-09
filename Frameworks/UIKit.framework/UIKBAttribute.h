/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface UIKBAttribute : NSObject <NSCoding>
{
    NSString *m_name;
    id m_value;
}

@property(copy) id value;
@property(copy) NSString *name;

+ (id)attributeWithName:(id)arg1 value:(id)arg2;

- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end