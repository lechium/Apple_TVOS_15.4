//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSIndexConnection, NSString;

@interface CSPrivateSearchableIndex
{
    _Bool _attemptedIndexPathResolution;	// 96 = 0x60
    int _resolvedIndexPathErrorCode;	// 100 = 0x64
    NSString *_resolvedIndexPath;	// 104 = 0x68
    NSString *_indexPath;	// 112 = 0x70
    CSIndexConnection *_savedConnection;	// 120 = 0x78
}

+ (id)defaultSearchableIndex;	// IMP=0x0000000000037d65
- (void).cxx_destruct;	// IMP=0x000000000003854c
@property(retain, nonatomic) CSIndexConnection *savedConnection; // @synthesize savedConnection=_savedConnection;
@property(retain, nonatomic) NSString *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) int resolvedIndexPathErrorCode; // @synthesize resolvedIndexPathErrorCode=_resolvedIndexPathErrorCode;
@property(retain, nonatomic) NSString *resolvedIndexPath; // @synthesize resolvedIndexPath=_resolvedIndexPath;
@property _Bool attemptedIndexPathResolution; // @synthesize attemptedIndexPathResolution=_attemptedIndexPathResolution;
- (id)xpc_dictionary_for_command:(const char *)arg1 requiresInitialization:(_Bool)arg2;	// IMP=0x00000000000380f6
- (id)connection;	// IMP=0x0000000000038012
- (void)dealloc;	// IMP=0x0000000000037eaa
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000037e20

@end
