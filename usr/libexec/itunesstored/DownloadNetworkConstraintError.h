//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DownloadNetworkConstraintError
{
    _Bool _canDownloadInITunes;	// 40 = 0x28
    long long _sizeLimit;	// 48 = 0x30
}

@property(nonatomic) long long constrainedSizeLimit; // @synthesize constrainedSizeLimit=_sizeLimit;
@property(nonatomic) _Bool canDownloadInITunes; // @synthesize canDownloadInITunes=_canDownloadInITunes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010d727
- (_Bool)isValidError;	// IMP=0x001000000010d71f
- (id)copyUserNotification;	// IMP=0x001000000010d43a
- (id)_specificStringWithLocalizedKeyBase:(id)arg1;	// IMP=0x001000000010d2e7
- (id)_genericStringWithLocalizedKeyBase:(id)arg1;	// IMP=0x001000000010d259
- (_Bool)canCoalesceWithError:(id)arg1;	// IMP=0x001000000010d17c

@end

