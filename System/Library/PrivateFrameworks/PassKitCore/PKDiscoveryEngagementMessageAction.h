//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface PKDiscoveryEngagementMessageAction : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_titleKey;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSDictionary *_actionInfo;	// 24 = 0x18
    NSString *_localizedTitle;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f357d
- (void).cxx_destruct;	// IMP=0x00000000000f3a7e
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSDictionary *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
- (id)description;	// IMP=0x00000000000f3961
- (unsigned long long)hash;	// IMP=0x00000000000f38d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f383e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f378d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f36f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f3585
- (void)localizeWithBundle:(id)arg1;	// IMP=0x00000000000f3530
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000f3378

@end

