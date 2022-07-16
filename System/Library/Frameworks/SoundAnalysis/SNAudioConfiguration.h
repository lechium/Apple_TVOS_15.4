//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>

@class NSString;

@interface SNAudioConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_category;	// 8 = 0x8
    NSString *_mode;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006773c
- (void).cxx_destruct;	// IMP=0x000000000006796b
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000067816
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000067744
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006766a
- (_Bool)isEqualToAudioConfiguration:(id)arg1;	// IMP=0x0000000000067541
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000674da
- (id)description;	// IMP=0x000000000006742e

@end
