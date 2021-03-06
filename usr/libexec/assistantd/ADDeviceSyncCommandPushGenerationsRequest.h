//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ADDeviceSyncCommandPushGenerationsRequest : NSObject
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000198ce7
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000198f80
- (void).cxx_destruct;	// IMP=0x0010000000198dfc
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000198dcf
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000198cef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000198cdc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000198c39
- (unsigned long long)hash;	// IMP=0x0010000000198c23
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000198aca
- (id)description;	// IMP=0x0010000000198ab6
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x0010000000198a43
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000198fef

@end

