//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface InstallSoftwareDownloadOperation
{
}

- (id)_newSoftwarePropertiesWithDownload:(id)arg1;	// IMP=0x00200000001cd6cb
- (void)_monitorForTerminationOfBundleID:(id)arg1;	// IMP=0x00100000001cd267
- (_Bool)_downloadSecondaryAssets:(id *)arg1;	// IMP=0x00100000001cd0b9
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x00100000001cd01d
- (void)run;	// IMP=0x00100000001cb4e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

