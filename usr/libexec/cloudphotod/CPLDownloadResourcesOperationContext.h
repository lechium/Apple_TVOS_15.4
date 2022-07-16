//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

@interface CPLDownloadResourcesOperationContext
{
    NSMapTable *_resourceToProgressMap;	// 72 = 0x48
    unsigned long long _resourceType;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000008f32e
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)extendedStatusDescriptionStrings;	// IMP=0x001000000008ec17
- (id)operationDescription;	// IMP=0x001000000008ebab
- (void)recordCompletionForResource:(id)arg1 withError:(id)arg2;	// IMP=0x001000000008eb73
- (void)updateProgress:(double)arg1 forResource:(id)arg2;	// IMP=0x001000000008eae0
- (void)addResource:(id)arg1;	// IMP=0x001000000008ea55
- (id)initWithResourceType:(unsigned long long)arg1;	// IMP=0x001000000008ea11

@end
