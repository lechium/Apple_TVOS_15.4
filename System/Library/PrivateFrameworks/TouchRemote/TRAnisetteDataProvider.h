//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchRemote/AKAnisetteServiceProtocol-Protocol.h>
#import <TouchRemote/NSCopying-Protocol.h>

@class NSString, TRSession;

@interface TRAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCopying>
{
    TRSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000012a1e
@property(retain, nonatomic) TRSession *session; // @synthesize session=_session;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012818
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012643
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012499
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000122c2
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012118
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001210d
- (id)initWithSession:(id)arg1;	// IMP=0x00000000000120a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

