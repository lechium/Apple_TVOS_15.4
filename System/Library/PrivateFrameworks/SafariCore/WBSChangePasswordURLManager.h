//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WBSChangePasswordURLManager : NSObject
{
    NSDictionary *_changePasswordURLStrings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000012cc5
@property(copy) NSDictionary *changePasswordURLStrings; // @synthesize changePasswordURLStrings=_changePasswordURLStrings;
- (id)changePasswordURLForHighLevelDomain:(id)arg1;	// IMP=0x0000000000012c3e
- (id)initWithChangePasswordURLStrings:(id)arg1;	// IMP=0x0000000000012bb4
- (id)init;	// IMP=0x0000000000012ba6

@end
