//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHFetchResult;

@interface PXFetchResultDataSection
{
    PHFetchResult *_fetchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011c32c
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000011c2b4
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000011c231
- (id)objectAtIndex:(long long)arg1;	// IMP=0x000000000011c1d2
- (long long)count;	// IMP=0x000000000011c18e
- (id)initWithOutlineObject:(id)arg1;	// IMP=0x000000000011c10b
- (id)initWithFetchResult:(id)arg1;	// IMP=0x000000000011c09b

@end
