//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>
#import <AVFCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AVAssetDownloadContentConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_variantQualifiers;	// 8 = 0x8
    NSArray *_mediaSelections;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004c2c9
@property(copy, nonatomic) NSArray *mediaSelections; // @synthesize mediaSelections=_mediaSelections;
@property(copy, nonatomic) NSArray *variantQualifiers; // @synthesize variantQualifiers=_variantQualifiers;
- (void)dealloc;	// IMP=0x000000000004bce0
- (void)_serializeIntoDownloadConfig:(void *)arg1 asset:(id)arg2;	// IMP=0x000000000004bc9e
- (void)_serializeIntoDownloadConfig:(void *)arg1 environmentalCondition:(long long)arg2;	// IMP=0x000000000004bc1a
- (const void *)_createFigContentConfigForEnvironmentalCondition:(long long)arg1;	// IMP=0x000000000004b7d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b783
- (id)init;	// IMP=0x000000000004b727
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004bf73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004bd5c

@end

