//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface CardDAVFolderInfoTaskGroup
{
    NSSet *_directoryGatewayURLs;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000022ac
- (id)_copyContainerParserMappings;	// IMP=0x0000000000002293
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;	// IMP=0x0000000000002227
- (int)containerInfoDepthForURL:(id)arg1;	// IMP=0x00000000000021e0
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 directoryGatewayURLs:(id)arg3 taskManager:(id)arg4;	// IMP=0x000000000000211e

@end

