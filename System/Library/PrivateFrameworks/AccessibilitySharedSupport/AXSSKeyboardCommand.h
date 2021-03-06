//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilitySharedSupport/NSCopying-Protocol.h>
#import <AccessibilitySharedSupport/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXSSKeyboardCommand : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_type;	// 8 = 0x8
    NSString *_standardCommandIdentifier;	// 16 = 0x10
}

+ (id)commandWithStandardCommandIdentifier:(id)arg1;	// IMP=0x000000000000e6a7
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e69f
- (void).cxx_destruct;	// IMP=0x000000000000edf3
@property(readonly, nonatomic) NSString *standardCommandIdentifier; // @synthesize standardCommandIdentifier=_standardCommandIdentifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)description;	// IMP=0x000000000000ed15
- (unsigned long long)hash;	// IMP=0x000000000000ec88
- (_Bool)isEqualToCommand:(id)arg1;	// IMP=0x000000000000eb6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000eb0f
@property(readonly, nonatomic) NSString *localizedName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e944
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e896
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e7b9
- (id)initWithType:(id)arg1;	// IMP=0x000000000000e7a5
- (id)initWithStandardCommandIdentifier:(id)arg1;	// IMP=0x000000000000e789
- (id)_initWithType:(id)arg1 standardCommandIdentifier:(id)arg2;	// IMP=0x000000000000e6f0

@end

