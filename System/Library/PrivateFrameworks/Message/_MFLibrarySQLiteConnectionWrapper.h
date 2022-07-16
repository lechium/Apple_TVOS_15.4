//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFProtectedSQLiteConnection, NSArray;

@interface _MFLibrarySQLiteConnectionWrapper : NSObject
{
    NSArray *_stack;	// 8 = 0x8
    _Bool _writer;	// 16 = 0x10
    _Bool _invalid;	// 17 = 0x11
    MFProtectedSQLiteConnection *_connection;	// 24 = 0x18
    unsigned long long _refcount;	// 32 = 0x20
}

+ (id)wrapperWithConnection:(id)arg1 forWriting:(_Bool)arg2;	// IMP=0x000000000006ab70
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) unsigned long long refcount; // @synthesize refcount=_refcount;
@property(readonly, nonatomic) _Bool writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) MFProtectedSQLiteConnection *connection; // @synthesize connection=_connection;
- (unsigned long long)decrementRefcount;	// IMP=0x000000000006ad11
- (unsigned long long)incrementRefcount;	// IMP=0x000000000006ad00
- (void)dealloc;	// IMP=0x000000000006ac2f
- (id)initWithConnection:(id)arg1 forWriting:(_Bool)arg2;	// IMP=0x000000000006abab

@end
