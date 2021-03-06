//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hadResolutionErrorsOnLoad;	// 8 = 0x8
    _Bool _isDefault;	// 9 = 0x9
    _Bool _fromPlist;	// 10 = 0xa
    NSString *_name;	// 16 = 0x10
    NSString *_role;	// 24 = 0x18
    Class _sceneClass;	// 32 = 0x20
    Class _delegateClass;	// 40 = 0x28
    UIStoryboard *_storyboard;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001246c3
+ (id)configurationWithName:(id)arg1 sessionRole:(id)arg2;	// IMP=0x00000000001235fb
- (void).cxx_destruct;	// IMP=0x000000000012505b
@property(readonly, nonatomic) _Bool _fromPlist; // @synthesize _fromPlist;
@property(readonly, nonatomic) _Bool _isDefault; // @synthesize _isDefault;
@property(readonly, nonatomic) _Bool _hadResolutionErrorsOnLoad; // @synthesize _hadResolutionErrorsOnLoad;
@property(readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000124992
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001246cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012468b
- (id)description;	// IMP=0x00000000001245cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000124479
- (unsigned long long)hash;	// IMP=0x00000000001243c7
@property(retain, nonatomic) UIStoryboard *storyboard;
@property(retain, nonatomic) Class delegateClass;
@property(retain, nonatomic) Class sceneClass;
- (id)_initWithConfiguration:(id)arg1;	// IMP=0x00000000001241ae
- (id)_initWithLoadErrorForSessionRole:(id)arg1;	// IMP=0x000000000012418d
- (id)init;	// IMP=0x000000000012416f
- (id)initWithName:(id)arg1 sessionRole:(id)arg2;	// IMP=0x0000000000123667

@end

