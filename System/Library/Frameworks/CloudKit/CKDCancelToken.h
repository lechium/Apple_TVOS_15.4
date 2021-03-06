//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKDCancelling-Protocol.h>

@interface CKDCancelToken : NSObject <CKDCancelling>
{
    _Bool _isCancelled;	// 8 = 0x8
    CDUnknownBlockType _cancelAction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003f04b
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
- (void)cancel;	// IMP=0x000000000003efbd
- (_Bool)isCancelled;	// IMP=0x000000000003efb4

@end

