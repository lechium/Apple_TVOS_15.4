//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SSItemOfferDeviceError : NSObject
{
    NSString *_localizedMessage;	// 8 = 0x8
    NSString *_localizedTitle;	// 16 = 0x10
    NSString *_localizedURLTitle;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *localizedURLTitle; // @synthesize localizedURLTitle=_localizedURLTitle;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
- (void)dealloc;	// IMP=0x000000000008fa39
- (id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4;	// IMP=0x000000000008f9ad

@end

