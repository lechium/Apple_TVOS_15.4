//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAMovieResolution <SAAceSerializable>
{
}

+ (id)resolutionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000279a3
+ (id)resolution;	// IMP=0x0000000000027991
@property(nonatomic) long long width;
@property(nonatomic) long long height;
- (id)encodedClassName;	// IMP=0x0000000000027984
- (id)groupIdentifier;	// IMP=0x0000000000027970

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

