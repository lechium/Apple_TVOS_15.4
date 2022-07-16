//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSControl, NSString, PCSCKKSItemModifyContext;

@interface PCSCKKSSyncViewOperation
{
    PCSCKKSItemModifyContext *_context;	// 8 = 0x8
    CKKSControl *_CKKSControl;	// 16 = 0x10
    NSString *_view;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000209be
@property(retain) NSString *view; // @synthesize view=_view;
@property(retain) CKKSControl *CKKSControl; // @synthesize CKKSControl=_CKKSControl;
@property(readonly) PCSCKKSItemModifyContext *context; // @synthesize context=_context;
- (void)syncView;	// IMP=0x0000000000020637
- (void)checkTLKStatus;	// IMP=0x00000000000201c4
- (_Bool)ensureControl;	// IMP=0x000000000002003c
- (void)start;	// IMP=0x000000000001fdee
- (id)initWithItemModifyContext:(id)arg1;	// IMP=0x000000000001fcaf

@end

