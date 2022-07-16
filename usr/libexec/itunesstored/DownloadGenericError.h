//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface DownloadGenericError
{
    NSError *_error;	// 40 = 0x28
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010cb2d
- (id)_notificationTitle;	// IMP=0x001000000010c8a9
- (id)_notificationBody;	// IMP=0x001000000010c4ed
- (_Bool)_isInstallError:(id)arg1;	// IMP=0x001000000010c492
- (void)performActionForResponseFlags:(unsigned long long)arg1;	// IMP=0x001000000010c2df
- (id)copyUserNotification;	// IMP=0x001000000010c123
- (_Bool)canCoalesceWithError:(id)arg1;	// IMP=0x001000000010c054
- (void)dealloc;	// IMP=0x001000000010c012
- (id)initWithError:(id)arg1;	// IMP=0x001000000010bfbb

@end

