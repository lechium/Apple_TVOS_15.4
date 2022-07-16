//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppUserDefaultsStoring-Protocol.h>

@class NSString;

@interface IKAppUserDefaults : NSObject <IKAppUserDefaultsStoring>
{
}

+ (id)sharedUserDefaults;	// IMP=0x0000000000012c38
- (void)removeDataForKey:(id)arg1;	// IMP=0x0000000000012dd6
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000012d4c
- (id)dataForKey:(id)arg1;	// IMP=0x0000000000012cc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

