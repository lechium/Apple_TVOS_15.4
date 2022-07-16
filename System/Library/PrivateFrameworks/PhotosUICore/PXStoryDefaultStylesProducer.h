//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryStylesProducer-Protocol.h>

@class NSArray;
@protocol OS_os_log;

@interface PXStoryDefaultStylesProducer : NSObject <PXStoryStylesProducer>
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSArray *_autoEditDecisionLists;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003dc280
@property(readonly, copy, nonatomic) NSArray *autoEditDecisionLists; // @synthesize autoEditDecisionLists=_autoEditDecisionLists;
- (id)requestStylesWithOptions:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003dc06d
- (id)initWithAutoEditDecisionLists:(id)arg1;	// IMP=0x00000000003dbf95
- (id)init;	// IMP=0x00000000003dbf1b

@end

