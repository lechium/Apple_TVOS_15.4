//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKSQLiteExecutor;

@interface AKPrivateEmailStoreManager : NSObject
{
    AKSQLiteExecutor *_executor;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000005524
- (void).cxx_destruct;	// IMP=0x0020000000007e44
@property(retain, nonatomic) AKSQLiteExecutor *executor; // @synthesize executor=_executor;
- (id)fetchAllPrivateEmailsWithError:(id *)arg1;	// IMP=0x0010000000007a87
- (_Bool)setProtocolVersion:(int)arg1 error:(id *)arg2;	// IMP=0x001000000000777b
- (int)currentProtocolVersion;	// IMP=0x001000000000746b
- (_Bool)commitChangesToCacheWithInformation:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006c63
- (_Bool)setCurrentEmailListVersion:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006925
- (id)currentEmailListVersion;	// IMP=0x001000000000662b
- (id)_hashKeyIfNecessary:(id)arg1;	// IMP=0x0010000000006584
- (id)emailForExactKey:(id)arg1 keyAlreadyHashed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000000606a
- (_Bool)removePrivateEmailForKey:(id)arg1 keyAlreadyHashed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000005cfd
- (_Bool)removePrivateEmailForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000005ce6
- (_Bool)setPrivateEmail:(id)arg1 keyAlreadyHashed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000005760
- (void)clearDatabase:(id *)arg1;	// IMP=0x0010000000005705
- (id)initWithPath:(id)arg1;	// IMP=0x001000000000560f
- (id)initWithExecutor:(id)arg1;	// IMP=0x00100000000055a4
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x0010000000005592
- (id)init;	// IMP=0x0010000000005579

@end
