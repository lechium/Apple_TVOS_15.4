//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface OSASafeCreateDirectoryOptions : NSObject
{
    _Bool _createIntermediates;	// 8 = 0x8
    _Bool _fileProtectionNone;	// 9 = 0x9
    NSNumber *_groupID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000028233
@property _Bool fileProtectionNone; // @synthesize fileProtectionNone=_fileProtectionNone;
@property(copy) NSNumber *groupID; // @synthesize groupID=_groupID;
@property _Bool createIntermediates; // @synthesize createIntermediates=_createIntermediates;

@end

