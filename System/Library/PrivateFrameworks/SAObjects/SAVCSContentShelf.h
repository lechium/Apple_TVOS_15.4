//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL;

@interface SAVCSContentShelf
{
}

+ (id)contentShelfWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000293f0
+ (id)contentShelf;	// IMP=0x00000000000293de
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property(copy, nonatomic) NSArray *contentHead;
- (id)encodedClassName;	// IMP=0x00000000000293d1
- (id)groupIdentifier;	// IMP=0x00000000000293bd

@end

