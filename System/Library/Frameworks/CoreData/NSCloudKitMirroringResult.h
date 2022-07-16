//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCloudKitMirroringRequest, NSError;

@interface NSCloudKitMirroringResult
{
    _Bool _success;	// 8 = 0x8
    _Bool _madeChanges;	// 9 = 0x9
    NSError *_error;	// 16 = 0x10
    NSCloudKitMirroringRequest *_request;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool madeChanges; // @synthesize madeChanges=_madeChanges;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) NSCloudKitMirroringRequest *request; // @synthesize request=_request;
- (id)description;	// IMP=0x0000000000297a53
- (void)dealloc;	// IMP=0x00000000002979ef
- (id)initWithRequest:(id)arg1 success:(_Bool)arg2 madeChanges:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000297847

@end

