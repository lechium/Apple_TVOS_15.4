//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSMutableCopying-Protocol.h>
#import <PhotosUICore/PXStoryComposabilityResults-Protocol.h>

@class NSString;

@interface PXStoryComposabilityScoresArray : NSObject <PXStoryComposabilityResults, NSCopying, NSMutableCopying>
{
    struct vector<PXStoryAutoEditComposabilityScores, std::allocator<PXStoryAutoEditComposabilityScores>> _scores;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001ffc39
- (void).cxx_destruct;	// IMP=0x00000000001ffc1d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ffbc7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ffb71
- (CDStruct_b2fbf00d)composabilityScoresAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001ffb62
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithComposabilityResults:(id)arg1;	// IMP=0x00000000001ff7a3
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000001ff733
- (id)init;	// IMP=0x00000000001ff71f

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

