//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MRDPinPairingDialogDelegate;

@interface MRDPinPairingDialog : NSObject
{
    id <MRDPinPairingDialogDelegate> _delegate;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x004000000004403b
- (void).cxx_destruct;	// IMP=0x00200000000440f1
@property(nonatomic) __weak id <MRDPinPairingDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)closeAll;	// IMP=0x00100000000440c4
- (void)closeForClient:(id)arg1;	// IMP=0x00100000000440be
- (void)showWithPin:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000000440b8

@end
