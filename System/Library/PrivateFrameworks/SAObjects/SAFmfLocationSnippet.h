//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString, NSURL;

@interface SAFmfLocationSnippet
{
}

+ (id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000016c2f
+ (id)locationSnippet;	// IMP=0x0000000000016c1d
@property(copy, nonatomic) NSURL *searchContext;
@property(copy, nonatomic) NSString *proximity;
@property(copy, nonatomic) NSArray *locations;
@property(copy, nonatomic) NSNumber *atRequestedLocation;
- (id)encodedClassName;	// IMP=0x0000000000016c10
- (id)groupIdentifier;	// IMP=0x0000000000016bfc

@end
