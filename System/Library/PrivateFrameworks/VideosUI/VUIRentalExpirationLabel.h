//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSTimer;
@protocol VUIRentalExpirationLabelDelegate;

__attribute__((visibility("hidden")))
@interface VUIRentalExpirationLabel
{
    _Bool _contentIsAvailable;	// 8 = 0x8
    _Bool _forDownload;	// 9 = 0x9
    _Bool _useWarningColor;	// 10 = 0xa
    NSDate *_expirationDate;	// 16 = 0x10
    id <VUIRentalExpirationLabelDelegate> _delegate;	// 24 = 0x18
    NSString *_locStringPrefix;	// 32 = 0x20
    NSTimer *_expiryUpdateTimer;	// 40 = 0x28
}

+ (id)_calculateExpirationStringForDate:(id)arg1 displayWarningColor:(_Bool *)arg2 updateInterval:(long long *)arg3 locStringPrefix:(id)arg4;	// IMP=0x000000000008b6bb
+ (_Bool)shouldShowLabelForDownloadExpirationDate:(id)arg1;	// IMP=0x000000000008b565
+ (id)calculateExpirationStringForDate:(id)arg1 updateInterval:(long long *)arg2 locStringPrefix:(id)arg3;	// IMP=0x000000000008b4d7
+ (id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 locStringPrefix:(id)arg4 forDownload:(_Bool)arg5 contentIsAvailable:(_Bool)arg6;	// IMP=0x000000000008ac09
+ (id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 locStringPrefix:(id)arg4 useWarningColor:(_Bool)arg5;	// IMP=0x000000000008ab6c
+ (id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 locStringPrefix:(id)arg4;	// IMP=0x000000000008aad7
+ (id)labelWithTextLayout:(id)arg1 existingLabel:(id)arg2 locStringPrefix:(id)arg3;	// IMP=0x000000000008a970
+ (id)labelForRentalExpirationDate:(id)arg1 downloadExpirationDate:(id)arg2 contentAvailabilityDate:(id)arg3 downloadStatus:(unsigned long long)arg4;	// IMP=0x000000000008a7d0
- (void).cxx_destruct;	// IMP=0x000000000008bb41
@property(nonatomic) _Bool useWarningColor; // @synthesize useWarningColor=_useWarningColor;
@property(nonatomic) _Bool forDownload; // @synthesize forDownload=_forDownload;
@property(nonatomic) _Bool contentIsAvailable; // @synthesize contentIsAvailable=_contentIsAvailable;
@property(retain, nonatomic) NSTimer *expiryUpdateTimer; // @synthesize expiryUpdateTimer=_expiryUpdateTimer;
@property(copy, nonatomic) NSString *locStringPrefix; // @synthesize locStringPrefix=_locStringPrefix;
@property(nonatomic) __weak id <VUIRentalExpirationLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void)_computeExpirationLabel:(id)arg1;	// IMP=0x000000000008aee9
- (void)invalidateTimer;	// IMP=0x000000000008aeb1
- (void)dealloc;	// IMP=0x000000000008adf8
- (void)vui_willMoveToWindow:(id)arg1;	// IMP=0x000000000008add3

@end

