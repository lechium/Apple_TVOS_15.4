//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHResourceDownloadSettings
{
    _Bool _simulateDownload;	// 8 = 0x8
    _Bool _simulateDownloadFailure;	// 9 = 0x9
}

+ (id)settingsControllerModule;	// IMP=0x000000000003d8a0
+ (id)sharedSettings;	// IMP=0x000000000003d849
@property(nonatomic) _Bool simulateDownloadFailure; // @synthesize simulateDownloadFailure=_simulateDownloadFailure;
@property(nonatomic) _Bool simulateDownload; // @synthesize simulateDownload=_simulateDownload;
- (void)setDefaultValues;	// IMP=0x000000000003d7af
- (id)parentSettings;	// IMP=0x000000000003d796

@end

