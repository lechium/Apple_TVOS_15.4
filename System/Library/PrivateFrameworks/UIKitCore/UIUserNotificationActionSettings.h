//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_category;	// 8 = 0x8
    NSDictionary *_actionsByContext;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a7c752
- (void).cxx_destruct;	// IMP=0x0000000000a7d0ce
@property(copy, nonatomic) NSDictionary *actionsByContext; // @synthesize actionsByContext=_actionsByContext;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)arg1;	// IMP=0x0000000000a7d086
- (id)validatedSettings;	// IMP=0x0000000000a7cbf1
- (id)actionsForContext:(unsigned long long)arg1;	// IMP=0x0000000000a7cb8a
- (id)actions;	// IMP=0x0000000000a7cb76
- (id)description;	// IMP=0x0000000000a7cb28
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a7ca82
- (unsigned long long)hash;	// IMP=0x0000000000a7ca43
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a7ca38
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a7ca05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a7c997
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a7c813
- (id)initWithCategory:(id)arg1 actionsByContext:(id)arg2;	// IMP=0x0000000000a7c75a

@end
