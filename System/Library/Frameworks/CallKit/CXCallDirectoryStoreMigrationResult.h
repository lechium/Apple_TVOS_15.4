//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CXCallDirectoryStoreMigrationResult : NSObject
{
    _Bool _requiresExtensionDisablement;	// 8 = 0x8
    _Bool _requiresExtensionSynchronization;	// 9 = 0x9
    long long _startingSchemaVersion;	// 16 = 0x10
    long long _endingSchemaVersion;	// 24 = 0x18
}

@property(nonatomic) _Bool requiresExtensionSynchronization; // @synthesize requiresExtensionSynchronization=_requiresExtensionSynchronization;
@property(nonatomic) _Bool requiresExtensionDisablement; // @synthesize requiresExtensionDisablement=_requiresExtensionDisablement;
@property(nonatomic) long long endingSchemaVersion; // @synthesize endingSchemaVersion=_endingSchemaVersion;
@property(nonatomic) long long startingSchemaVersion; // @synthesize startingSchemaVersion=_startingSchemaVersion;

@end

