//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/SSRequestDelegate-Protocol.h>

@class MPHomeSharingML3DataProvider, NSError, NSString, SSRentalCheckoutRequest;

__attribute__((visibility("hidden")))
@interface MPHomeSharingRentalErrorResolver <SSRequestDelegate>
{
    unsigned long long _accountID;	// 8 = 0x8
    MPHomeSharingML3DataProvider *_dataProvider;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    unsigned long long _itemID;	// 32 = 0x20
    unsigned long long _homeSharingID;	// 40 = 0x28
    unsigned long long _rentalID;	// 48 = 0x30
    SSRentalCheckoutRequest *_request;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001ca696
@property(readonly, nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (_Bool)_errorIsFairPlayError:(id)arg1;	// IMP=0x00000000001ca658
- (void)requestDidFinish:(id)arg1;	// IMP=0x00000000001ca481
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000001ca27f
- (void)resolveError:(id)arg1;	// IMP=0x00000000001ca0a5
- (void)dealloc;	// IMP=0x00000000001ca040
- (id)initWithItemID:(unsigned long long)arg1 homeSharingID:(unsigned long long)arg2 rentalID:(unsigned long long)arg3 accountID:(unsigned long long)arg4;	// IMP=0x00000000001c9fc6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

