//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVSettingsPreviouslyUsedEmailFacade : NSObject
{
    NSArray *_previouslyUsedEmails;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000111b90
- (void).cxx_destruct;	// IMP=0x00200000001120d0
@property(copy, nonatomic) NSArray *previouslyUsedEmails; // @synthesize previouslyUsedEmails=_previouslyUsedEmails;
- (void)clearAllEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000111f80
- (void)deleteEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000111e20
- (void)update;	// IMP=0x0010000000111d90
- (id)init;	// IMP=0x0010000000111c80

@end

