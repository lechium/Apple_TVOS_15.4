//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKappaServer : NSObject
{
}

- (void)requestConfiguration;	// IMP=0x00200000008f20df
- (void)sendConfigurationRequest;	// IMP=0x00100000008f20d9
- (void)setupConfigurationTimer;	// IMP=0x00100000008f20d3
- (void)registerDevice;	// IMP=0x00100000008f20cd
- (void)enable;	// IMP=0x00100000008f20c7
- (id)upload:(id)arg1 metaData:(id)arg2;	// IMP=0x00100000008f20bf
- (void)reregister;	// IMP=0x00100000008f20b9
- (void)clearUUID;	// IMP=0x00100000008f20b3
- (id)getUUID;	// IMP=0x00100000008f20ab
- (id)initWithUniverse:(id)arg1 logFolder:(id)arg2 delegate:(struct CLKappaServerClient *)arg3;	// IMP=0x00100000008f207c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

