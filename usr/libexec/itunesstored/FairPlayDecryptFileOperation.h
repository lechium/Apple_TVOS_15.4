//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class FairPlayDecryptSession, NSData, NSString;

@interface FairPlayDecryptFileOperation : ISOperation
{
    NSData *_dpInfo;	// 96 = 0x60
    double _lastSnapshotTime;	// 104 = 0x68
    NSString *_path;	// 112 = 0x70
    FairPlayDecryptSession *_fairplayDecryptSession;	// 120 = 0x78
}

- (void)_updateProgressWithByteCount:(long long)arg1;	// IMP=0x00200000000851ff
- (void)_initializeProgressWithFileHandle:(id)arg1;	// IMP=0x0010000000085153
- (_Bool)_decryptWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000084b8a
- (void)run;	// IMP=0x00100000000847c0
- (void)dealloc;	// IMP=0x0010000000084768
- (id)initWithPath:(id)arg1 dpInfo:(id)arg2;	// IMP=0x0010000000084696
- (id)init;	// IMP=0x0010000000084680

@end

