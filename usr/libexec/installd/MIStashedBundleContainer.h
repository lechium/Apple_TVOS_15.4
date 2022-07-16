//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MIStashMetadata, NSURL;

@interface MIStashedBundleContainer
{
    MIStashMetadata *_stashMetadata;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004a7c2
@property(retain, nonatomic) MIStashMetadata *stashMetadata; // @synthesize stashMetadata=_stashMetadata;
- (_Bool)saveStashMetadata:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000004a6d1
- (id)stashMetadataWithError:(id *)arg1;	// IMP=0x001000000004a50a
- (id)newStashMetadata;	// IMP=0x001000000004a4ae
@property(readonly, nonatomic) NSURL *stashMetadataURL;
- (id)initForAppContainerWithURL:(id)arg1;	// IMP=0x001000000004a426

@end

