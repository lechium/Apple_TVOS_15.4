//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IPAPreviewSizeRegistry : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSMutableDictionary *_policies;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000019d07
- (id)debugDescription;	// IMP=0x0000000000019cc6
- (id)description;	// IMP=0x0000000000019c0f
- (id)policyForStyleObject:(id)arg1;	// IMP=0x0000000000019b8f
- (id)policyForStyle:(unsigned long long)arg1;	// IMP=0x0000000000019aed
- (void)addPolicy:(id)arg1;	// IMP=0x0000000000019a80
- (id)initWithName:(id)arg1;	// IMP=0x00000000000199fb
- (id)init;	// IMP=0x0000000000019981

@end
