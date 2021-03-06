//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

@interface PCSCKKS : NSObject
{
    struct _PCSIdentitySetData *_set;	// 8 = 0x8
    NSOperationQueue *_queue;	// 16 = 0x10
    NSString *_dsid;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000372e9
@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
@property struct _PCSIdentitySetData *set; // @synthesize set=_set;
- (id)stripOperationErrorIfPCSError:(id)arg1;	// IMP=0x00000000000371aa
- (void)createIdentity:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036fef
- (void)createNewIdentity:(id)arg1 roll:(_Bool)arg2 sync:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x00000000000367b3
- (_Bool)shouldRetryWithSync:(id)arg1;	// IMP=0x00000000000363ff
- (void)submitRequest:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035e1a
- (id)createIdentityOperation:(id)arg1;	// IMP=0x0000000000035dcd
- (id)ensurePCSFieldsOperation:(id)arg1;	// IMP=0x0000000000035d80
- (id)fetchCurrentOperation:(id)arg1;	// IMP=0x0000000000035d33
- (id)syncViewOperation:(id)arg1;	// IMP=0x0000000000035ce6
- (void)dealloc;	// IMP=0x0000000000035c9f
- (id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg1 dsid:(id)arg2;	// IMP=0x0000000000035bf1

@end

