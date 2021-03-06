/* Copyright (c) 2012 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLYouTubeVideoSnippet.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube API (youtube/v3)
// Description:
//   Programmatic access to YouTube features.
// Documentation:
//   https://developers.google.com/youtube
// Classes:
//   GTLYouTubeVideoSnippet (0 custom class methods, 7 custom properties)
//   GTLYouTubeVideoSnippetThumbnails (0 custom class methods, 0 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeThumbnail;
@class GTLYouTubeVideoSnippetThumbnails;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoSnippet
//

// Basic details about a video, including title, description, uploader,
// thumbnails and category.

@interface GTLYouTubeVideoSnippet : GTLObject

// Video category the video belongs to.
@property (copy) NSString *categoryId;

// Channel publishing the video.
@property (copy) NSString *channelId;

// Description of the video.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// Date and time the video was published at.
@property (retain) GTLDateTime *publishedAt;

// Textual tags associated with the video.
@property (retain) NSArray *tags;  // of NSString

// Video thumbnails.
@property (retain) GTLYouTubeVideoSnippetThumbnails *thumbnails;

// Title of the video.
@property (copy) NSString *title;

@end


// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoSnippetThumbnails
//

@interface GTLYouTubeVideoSnippetThumbnails : GTLObject
// This object is documented as having more properties that are
// GTLYouTubeThumbnail. Use -additionalJSONKeys and -additionalPropertyForName:
// to get the list of properties and then fetch them; or -additionalProperties
// to fetch them all at once.
@end
