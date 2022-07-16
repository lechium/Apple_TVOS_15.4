//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXMemoriesDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_memories;	// 8 = 0x8
    NSDictionary *_infosByMemory;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003053f8
@property(readonly, nonatomic) NSDictionary *infosByMemory; // @synthesize infosByMemory=_infosByMemory;
@property(readonly, nonatomic) PHFetchResult *memories; // @synthesize memories=_memories;
- (id)stateUpdatedWithChange:(id)arg1 outMemoriesChangeDetails:(out id *)arg2;	// IMP=0x0000000000304cd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000304ccc
- (id)initWithMemories:(id)arg1 infosByMemory:(id)arg2;	// IMP=0x0000000000304c33

@end

