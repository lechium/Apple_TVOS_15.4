//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SASItnAlignment <SAAceSerializable>
{
}

+ (id)itnAlignmentWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f93e
+ (id)itnAlignment;	// IMP=0x000000000000f92c
@property(nonatomic) long long lastPreItnTokenIndex;
@property(nonatomic) long long lastPostItnCharPos;
@property(nonatomic) long long firstPreItnTokenIndex;
@property(nonatomic) long long firstPostItnCharPos;
- (id)encodedClassName;	// IMP=0x000000000000f91f
- (id)groupIdentifier;	// IMP=0x000000000000f90b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

