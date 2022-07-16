//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeDSL/BMDSLAggregator.h>

@class NSArray;

@interface BMDSLTableAggregator : BMDSLAggregator
{
    NSArray *_transforms;	// 8 = 0x8
    NSArray *_classNames;	// 16 = 0x10
    NSArray *_classKeyPaths;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a3ada
- (void).cxx_destruct;	// IMP=0x00000000000a4674
@property(readonly, copy, nonatomic) NSArray *classKeyPaths; // @synthesize classKeyPaths=_classKeyPaths;
@property(readonly, copy, nonatomic) NSArray *classNames; // @synthesize classNames=_classNames;
@property(retain, nonatomic) NSArray *transforms; // @synthesize transforms=_transforms;
- (id)bpsAggregator;	// IMP=0x00000000000a3e88
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a3c0e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a3ae2
- (id)initWithTableTransforms:(id)arg1 classNames:(id)arg2 classKeyPaths:(id)arg3;	// IMP=0x00000000000a3ab1
- (id)initWithTableTransforms:(id)arg1 classNames:(id)arg2;	// IMP=0x00000000000a3a85
- (id)initWithTableTransforms:(id)arg1 classNames:(id)arg2 classKeyPaths:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;	// IMP=0x00000000000a3924

@end

