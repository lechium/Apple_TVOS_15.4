//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface InstallAppReviewAppsTask
{
    NSArray *_installs;	// 8 = 0x8
    NSArray *_processedExternalIDs;	// 16 = 0x10
}

+ (id)_packageWithXPCMetadata:(id)arg1;	// IMP=0x00400000001a53d3
+ (id)_installWithXPCMetadata:(id)arg1;	// IMP=0x00100000001a4e0a
+ (id)taskWithXPCAppMetadata:(id)arg1 requestToken:(id)arg2;	// IMP=0x00100000001a4a2f
- (void).cxx_destruct;	// IMP=0x00200000001a5559
- (void)main;	// IMP=0x00100000001a4bd5
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithInstalls:(id)arg1;	// IMP=0x00100000001a4b06

@end

