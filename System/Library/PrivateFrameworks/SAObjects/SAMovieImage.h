//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL, SAMovieResolution;

@interface SAMovieImage <SAAceSerializable>
{
}

+ (id)imageWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000278dd
+ (id)image;	// IMP=0x00000000000278cb
@property(copy, nonatomic) NSURL *uri;
@property(retain, nonatomic) SAMovieResolution *resolution;
- (id)encodedClassName;	// IMP=0x00000000000278be
- (id)groupIdentifier;	// IMP=0x00000000000278aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

