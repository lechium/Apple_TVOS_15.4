//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SIRINLUNLContext : NSObject <NSSecureCoding>
{
    NSArray *_systemDialogActs;	// 8 = 0x8
    NSArray *_activeTasks;	// 16 = 0x10
    NSArray *_executedTasks;	// 24 = 0x18
    NSArray *_salientEntities;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000140a5
- (void).cxx_destruct;	// IMP=0x00000000000146ce
@property(retain, nonatomic) NSArray *salientEntities; // @synthesize salientEntities=_salientEntities;
@property(retain, nonatomic) NSArray *executedTasks; // @synthesize executedTasks=_executedTasks;
@property(retain, nonatomic) NSArray *activeTasks; // @synthesize activeTasks=_activeTasks;
@property(retain, nonatomic) NSArray *systemDialogActs; // @synthesize systemDialogActs=_systemDialogActs;
- (id)description;	// IMP=0x00000000000144b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014398
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000140ad
- (id)initWithSystemDialogActs:(id)arg1 activeTasks:(id)arg2 executedTasks:(id)arg3;	// IMP=0x0000000000013fee
- (id)initWithSystemDialogActs:(id)arg1 activeTasks:(id)arg2 executedTasks:(id)arg3 salientEntities:(id)arg4;	// IMP=0x0000000000013f0c

@end

